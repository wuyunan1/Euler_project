/*************************************************************************
	> File Name: ep04.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 20时16分48秒
 ************************************************************************/

#include <stdio.h>

int is_palindromic(int x) {
    int temp = x, num = 0;
    while (x) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    return temp == num;
    

}
int main() {
    
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++){
            if (i * j < ans) continue;
            if(!is_palindromic(i * j)) continue;
            ans = i * j;
        }
    }
    printf("%d\n", ans);
    return 0;
}

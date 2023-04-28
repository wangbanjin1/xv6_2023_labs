/*************************************************************************
	> File Name: sleep.c
	> Author:chuanchuan
	> Mail:jianchuanwang@163.com
	> Created Time: Fri 28 Apr 2023 04:28:05 PM CST
 ************************************************************************/

#include "../kernel/types.h"
#include "./user.h"

int main(int argc, char const *argv[]) {
    if (argc != 2) {
        fprintf(2, "usage: sleep <time>\n");
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}

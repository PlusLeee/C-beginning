//#include <stdio.h>
//
//// 计算一个数的真约数之和  
//int sum_of_divisors(int n) {
//    int sum = 1; // 1 总是任何数的约数  
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            sum += i;
//            if (i != n / i) {
//                sum += n / i;
//            }
//        }
//    }
//    return sum;
//}
//
//// 检查两个数是否是亲和数对  
//int are_amicable_numbers(int m, int n) {
//    return sum_of_divisors(m) == n && sum_of_divisors(n) == m;
//}
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    for (int i = a; i <= b; i++) {
//        for (int j = i + 1; j <= b; j++) {
//            if (are_amicable_numbers(i, j)) {
//                printf("%d %d\n", i, j);
//            }
//        }
//    }
//
//    return 0;
//}
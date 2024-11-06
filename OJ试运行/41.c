//#include <stdio.h>  
//#include <stdlib.h>  
//
//// 比较函数，用于qsort排序  
//int compare(const void* a, const void* b) {
//    return (*(int*)a - *(int*)b);
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int* heights = (int*)malloc(n * sizeof(int));
//    int* indices = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &heights[i]);
//        indices[i] = i + 1; // 记录原始编号，从1开始  
//    }
//
//    // 对木板长度进行排序，并记录原始编号  
//    qsort(heights, n, sizeof(int), compare);
//
//    int m = 0; // 当前选择的木板数量  
//    double max_volume = 0.0; // 最大体积（使用double以避免整数溢出）  
//    int best_m = 0; // 记录最大体积时的木板数量  
//    int* best_indices = NULL; // 记录最大体积时的木板编号  
//
//    // 遍历木板，尝试不同的m值  
//    for (int i = 0; i < n; i++) {
//        m++;
//        double current_volume = (double)m * m * heights[i];
//        if (current_volume > max_volume) {
//            max_volume = current_volume;
//            best_m = m;
//
//            // 重新分配内存以保存当前最佳木板编号  
//            if (best_indices != NULL) {
//                free(best_indices);
//            }
//            best_indices = (int*)malloc(m * sizeof(int));
//            for (int j = 0; j < m; j++) {
//                best_indices[j] = indices[j];
//            }
//        }
//    }
//
//    // 输出结果  
//    printf("%d\n", best_m);
//    for (int i = 0; i < best_m; i++) {
//        printf("%d ", best_indices[i]);
//    }
//    printf("\n");
//
//    // 释放内存  
//    free(heights);
//    free(indices);
//    free(best_indices);
//
//    return 0;
//}
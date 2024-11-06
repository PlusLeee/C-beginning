//#include <stdio.h>  
//#include <stdlib.h>  
//
//// �ȽϺ���������qsort����  
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
//        indices[i] = i + 1; // ��¼ԭʼ��ţ���1��ʼ  
//    }
//
//    // ��ľ�峤�Ƚ������򣬲���¼ԭʼ���  
//    qsort(heights, n, sizeof(int), compare);
//
//    int m = 0; // ��ǰѡ���ľ������  
//    double max_volume = 0.0; // ��������ʹ��double�Ա������������  
//    int best_m = 0; // ��¼������ʱ��ľ������  
//    int* best_indices = NULL; // ��¼������ʱ��ľ����  
//
//    // ����ľ�壬���Բ�ͬ��mֵ  
//    for (int i = 0; i < n; i++) {
//        m++;
//        double current_volume = (double)m * m * heights[i];
//        if (current_volume > max_volume) {
//            max_volume = current_volume;
//            best_m = m;
//
//            // ���·����ڴ��Ա��浱ǰ���ľ����  
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
//    // ������  
//    printf("%d\n", best_m);
//    for (int i = 0; i < best_m; i++) {
//        printf("%d ", best_indices[i]);
//    }
//    printf("\n");
//
//    // �ͷ��ڴ�  
//    free(heights);
//    free(indices);
//    free(best_indices);
//
//    return 0;
//}
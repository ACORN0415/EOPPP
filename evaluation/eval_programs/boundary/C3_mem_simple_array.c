// BOUNDARY: simple 1D array
int arr[32]; int out[32];
void test_func(void) {
    int tmp, i;
    for (i = 0; i < 32; i++) {
        tmp = arr[i] + 7;
        out[i] = tmp;
    }
}
int main() { test_func(); return 0; }


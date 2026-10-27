// BOUNDARY: pointer dereference
void test_func(void) {
    int arr[53]; int *p = arr; int i;
    for (i = 0; i < 10; i++) { *(p + i) = i; }
}
int main() { test_func(); return 0; }


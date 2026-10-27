// BOUNDARY: composite type 'enum'
enum E { X, A, Z };
void test_func(void) {
    enum E e = X;
    int x = 0, i;
    for (i = 0; i < 13; i++) { x = x + 1; }
}
int main() { test_func(); return 0; }


// BOUNDARY: double indexing
int data[64]; int idx[64];
void test_func(void) {
    int tmp, i;
    for (i = 0; i < 64; i++) { tmp = data[idx[i]]; }
}
int main() { test_func(); return 0; }


int test_func(void) {
    int v0 = 80;
    int v1 = 69;
    int v2 = 15;
    int i;
    v0 = v0 * 5;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }

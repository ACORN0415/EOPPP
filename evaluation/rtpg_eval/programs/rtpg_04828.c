int test_func(void) {
    int v0 = 55;
    int v1 = 28;
    int v2 = 81;
    int i;
    v0 = v0 * 3;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

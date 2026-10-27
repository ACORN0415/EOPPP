int test_func(void) {
    int v0 = 9;
    int v1 = 13;
    int v2 = 23;
    int v3 = 81;
    int i;
    v1 = v1 * 4;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

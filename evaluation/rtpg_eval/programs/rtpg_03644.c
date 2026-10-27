int test_func(void) {
    int v0 = 89;
    int v1 = 80;
    int v2 = 34;
    int i;
    v2 = v2 * 8;
    v2 = v2 - v0;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

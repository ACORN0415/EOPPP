int test_func(void) {
    int v0 = 89;
    int v1 = 59;
    int v2 = 64;
    int i;
    v0 = 72;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 * 2;
    return v0;
}
int main(void) { return test_func(); }

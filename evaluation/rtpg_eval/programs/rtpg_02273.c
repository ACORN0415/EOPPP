int test_func(void) {
    int v0 = 70;
    int v1 = 43;
    int v2 = 94;
    int v3 = 89;
    int v4 = 21;
    int i;
    v3 = v3 * 5;
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }

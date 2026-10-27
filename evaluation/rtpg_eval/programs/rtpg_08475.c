int test_func(void) {
    int v0 = 94;
    int v1 = 26;
    int v2 = 94;
    int v3 = 77;
    int i;
    v2 = v2 + v3;
    v3 = 32;
    v1 = v1 - v3;
    return v0;
}
int main(void) { return test_func(); }

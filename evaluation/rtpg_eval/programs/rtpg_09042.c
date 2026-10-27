int test_func(void) {
    int v0 = 70;
    int v1 = 87;
    int v2 = 71;
    int v3 = 89;
    int i;
    v2 = v2 - v1;
    v3 = v3 | v2;
    return v0;
}
int main(void) { return test_func(); }

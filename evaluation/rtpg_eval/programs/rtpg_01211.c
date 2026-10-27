int test_func(void) {
    int v0 = 90;
    int v1 = 86;
    int v2 = 47;
    int i;
    v0 = 89;
    v2 = v2 + v1;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    if (v0 > v0) { v0 = v0; }
    return v0;
}
int main(void) { return test_func(); }

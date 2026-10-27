int test_func(void) {
    int v0 = 76;
    int v1 = 89;
    int v2 = 59;
    int v3 = 72;
    int i;
    v0 = v0 + v3;
    if (v3 > v2) { v3 = v2; }
    for (i = 0; i < 19; i++) {
        v3 = v3 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

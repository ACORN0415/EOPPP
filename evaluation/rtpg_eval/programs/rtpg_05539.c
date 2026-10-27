int test_func(void) {
    int v0 = 58;
    int v1 = 16;
    int v2 = 59;
    int v3 = 56;
    int i;
    v1 = v1 + v2;
    v1 = v1 - v0;
    for (i = 0; i < 6; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }

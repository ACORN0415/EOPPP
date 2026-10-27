int test_func(void) {
    int v0 = 82;
    int v1 = 74;
    int v2 = 89;
    int v3 = 99;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

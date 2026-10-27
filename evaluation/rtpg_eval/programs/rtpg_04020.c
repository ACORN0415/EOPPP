int test_func(void) {
    int v0 = 83;
    int v1 = 53;
    int v2 = 89;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    v0 = 13;
    return v0;
}
int main(void) { return test_func(); }

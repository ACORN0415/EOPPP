int test_func(void) {
    int v0 = 46;
    int v1 = 21;
    int v2 = 72;
    int v3 = 53;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    v2 = 74;
    return v0;
}
int main(void) { return test_func(); }

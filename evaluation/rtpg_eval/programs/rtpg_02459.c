int test_func(void) {
    int v0 = 40;
    int v1 = 94;
    int v2 = 72;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

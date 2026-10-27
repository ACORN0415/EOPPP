int test_func(void) {
    int v0 = 94;
    int v1 = 71;
    int v2 = 27;
    int v3 = 3;
    int v4 = 46;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 46;
    int v1 = 65;
    int v2 = 49;
    int v3 = 94;
    int v4 = 70;
    int v5 = 14;
    int i;
    v4 = v4 - v1;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v4;
    }
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }

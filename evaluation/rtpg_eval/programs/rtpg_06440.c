int test_func(void) {
    int v0 = 46;
    int v1 = 82;
    int v2 = 94;
    int v3 = 60;
    int v4 = 54;
    int v5 = 48;
    int v6 = 13;
    int i;
    for (i = 0; i < 18; i++) {
        v6 = v6 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }

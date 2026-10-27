int test_func(void) {
    int v0 = 28;
    int v1 = 17;
    int v2 = 35;
    int v3 = 94;
    int v4 = 97;
    int v5 = 66;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

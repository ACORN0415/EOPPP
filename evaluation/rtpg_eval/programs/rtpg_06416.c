int test_func(void) {
    int v0 = 76;
    int v1 = 76;
    int v2 = 66;
    int v3 = 18;
    int i;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

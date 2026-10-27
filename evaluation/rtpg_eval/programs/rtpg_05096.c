int test_func(void) {
    int v0 = 5;
    int v1 = 27;
    int v2 = 49;
    int v3 = 31;
    int i;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }

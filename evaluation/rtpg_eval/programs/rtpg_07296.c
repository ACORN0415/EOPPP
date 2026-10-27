int test_func(void) {
    int v0 = 66;
    int v1 = 100;
    int v2 = 5;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    v2 = 39;
    return v0;
}
int main(void) { return test_func(); }

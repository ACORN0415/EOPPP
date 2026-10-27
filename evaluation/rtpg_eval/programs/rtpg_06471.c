int test_func(void) {
    int v0 = 9;
    int v1 = 15;
    int v2 = 41;
    int i;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v0;
    }
    v2 = 85;
    return v0;
}
int main(void) { return test_func(); }

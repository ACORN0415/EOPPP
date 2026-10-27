int test_func(void) {
    int v0 = 15;
    int v1 = 77;
    int v2 = 60;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v0;
    }
    v1 = v1 + v0;
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }

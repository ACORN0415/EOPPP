int test_func(void) {
    int v0 = 25;
    int v1 = 0;
    int v2 = 5;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v2 = v2 + v1;
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }

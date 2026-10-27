int test_func(void) {
    int v0 = 69;
    int v1 = 60;
    int v2 = 70;
    int i;
    v1 = v1 + v1;
    v0 = v0 - v2;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

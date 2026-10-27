int test_func(void) {
    int v0 = 85;
    int v1 = 70;
    int v2 = 6;
    int i;
    v0 = v0 - v2;
    v2 = v2 + v1;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

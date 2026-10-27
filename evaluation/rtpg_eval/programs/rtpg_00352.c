int test_func(void) {
    int v0 = 0;
    int v1 = 89;
    int v2 = 24;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v2;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }

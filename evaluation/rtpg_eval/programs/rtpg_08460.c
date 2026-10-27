int test_func(void) {
    int v0 = 4;
    int v1 = 58;
    int v2 = 89;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }

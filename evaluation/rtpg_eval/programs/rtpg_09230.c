int test_func(void) {
    int v0 = 48;
    int v1 = 51;
    int v2 = 66;
    int v3 = 33;
    int v4 = 27;
    int v5 = 85;
    int v6 = 39;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 67;
    int v1 = 37;
    int v2 = 89;
    int v3 = 63;
    int v4 = 49;
    int i;
    v0 = v0 + v2;
    v1 = v1 - v3;
    return v0;
}
int main(void) { return test_func(); }

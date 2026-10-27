int test_func(void) {
    int v0 = 90;
    int v1 = 73;
    int v2 = 89;
    int v3 = 41;
    int i;
    v3 = v3 - v1;
    v3 = v3 + v2;
    return v0;
}
int main(void) { return test_func(); }

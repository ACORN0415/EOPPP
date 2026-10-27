int test_func(void) {
    int v0 = 76;
    int v1 = 82;
    int v2 = 23;
    int i;
    v2 = v2 - v0;
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }

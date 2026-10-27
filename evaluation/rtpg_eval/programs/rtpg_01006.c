int test_func(void) {
    int v0 = 13;
    int v1 = 95;
    int v2 = 85;
    int i;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }

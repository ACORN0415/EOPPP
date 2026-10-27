int test_func(void) {
    int v0 = 65;
    int v1 = 21;
    int v2 = 58;
    int v3 = 28;
    int i;
    v0 = 98;
    v0 = v0 - v3;
    return v0;
}
int main(void) { return test_func(); }

#include<stdio.h>

#include<process.h>

#include<dos.h>

#include<graphics.h>

#include<conio.h>

#include<math.h>

#include<string.h>

void draw() {
    setbkcolor(0);
    setlinestyle(0, 0, 0);
    setcolor(9);
    circle(120, 240, 3);
    circle(520, 240, 3);
    setcolor(2);
    setfillstyle(SOLID_FILL, 5);
    circle(120, 240, 80);
    circle(120, 240, 95);
    circle(520, 240, 80);
    circle(520, 240, 95);
    floodfill(114, 150, 2);
    floodfill(514, 150, 2);
    settextstyle(2, 0, 5);
    setcolor(14);
    outtextxy(114, 166, "12");
    outtextxy(514, 166, "12");
    outtextxy(152, 173, "1");
    outtextxy(552, 173, "1");
    outtextxy(179, 199, "2");
    outtextxy(579, 199, "2");
    outtextxy(184, 231, "3");
    outtextxy(588, 230, "3");
    outtextxy(49, 230, "9");
    outtextxy(449, 230, "9");
    outtextxy(116, 301, "6");
    outtextxy(516, 301, "6");
    outtextxy(176, 270, "4");
    outtextxy(576, 270, "4");
    10 | P a g eouttextxy(59, 266, "8");
    outtextxy(459, 266, "8");
    outtextxy(54, 202, "10");
    outtextxy(454, 202, "10");
    outtextxy(77, 177, "11");
    outtextxy(477, 177, "11");
    outtextxy(152, 296, "5");
    outtextxy(552, 296, "5");
    outtextxy(85, 295, "7");
    outtextxy(485, 295, "7");
}
void main() {
    int gd = 0, gm;
    int ch, m = 0, h = 0;
    char city[30];
    printf("\n1\tBangkok");
    printf("\n2\tSingapore");
    printf("\n3\tBeijing");
    printf("\n4\tTokyo");
    printf("\n5\tMelbourne");
    printf("\n6\tSydney");
    printf("\n7\tSanFransico");
    printf("\n8\tLosAngeles");
    printf("\n9\tChicago");
    printf("\n10\tNewYork");
    printf("\n11\tLondon");
    printf("\n12\tParis");
    printf("\nEnter your choice");
    scanf("%d", & ch);
    11 | P a g eswitch(ch) {
        case 1: {
            m = 30;h = 2;
            strcpy(city, "Bangkok time");
            break;
        }
        case 2: {
            m = 30;h = 3;
            strcpy(city, "Singapore time");
            break;
        }
        case 3: {
            m = 30;h = 3;
            strcpy(city, "Beijing time");
            break;
        }
        case 4: {
            m = 30;h = 4;
            strcpy(city, "Tokyo time");
            break;
            12 | P a g e
        }
        case 5: {
            m = 0;h = 5;
            strcpy(city, "Melbourne time");
            gotoxy(2, 4);
            break;
        }
        case 6: {
            m = 29;h = 5;
            strcpy(city, "Sydney time");
            break;
        }
        case 7: {
            m = 30;h = 11;
            strcpy(city, "SanFransico time");
            break;
        }
        case 8: {
            m = 30;h = 11;
            strcpy(city, "Los Angeles time");
            break;
            13 | P a g e
        }
        case 9: {
            m = 30;h = 13;
            strcpy(city, "Chicago time");
            break;
        }
        case 10: {
            m = 30;h = 14;
            strcpy(city, "New York time");
            break;
        }
        case 11: {
            m = 29;h = 19;
            strcpy(city, "London time");
            break;
        }
        case 12: {
            m = 30;h = 20;
            strcpy(city, "Paris time");
            break;
        }
        14 | P a g edefault:
            printf("\nEnter only within choice");
    }
    clrscr();
    initgraph( & gd, & gm, "c:\tc\bgi");
    draw();
    int x, y, x1, y1;
    int q, w, q1, w1;
    int ta, d, ta1, d1;
    int count = 0;
    int pm, ph;
    struct time t;
    gettime( & t);
    float angle = 4.712389 + t.ti_sec * .1047198;
    float angle1 = 4.712389 + (t.ti_sec) * .1047198;
    float an = 4.712389 + t.ti_min * .1047198;
    float an1 = 4.712389 + (t.ti_min + m) * .1047198;
    float anf = 4.712389 + t.ti_hour * .1047198;
    float anf1 = 4.712389 + (t.ti_hour + h) * .1047198;
    while (!kbhit()) {
        draw();
        gettime( & t);
        gotoxy(5, 5);
        angle = 4.712389 + t.ti_sec * .1047198;
        angle1 = 4.712389 + (t.ti_sec) * .1047198;
        an = 4.712389 + t.ti_min * .1047198;
        15 | P a g ean1 = 4.712389 + (t.ti_min + m) * .1047198;
        anf = 4.712389 + t.ti_hour * 5 * .1047198;
        anf1 = 4.712389 + (t.ti_hour + h) * 5 * .1047198;
        if (t.ti_min >= 12 && t.ti_min < 24) {
            anf = anf + 2 * .1047198;
        }
        if (t.ti_min >= 24 && t.ti_min < 36) {
            anf = anf + (3 * .1047198);
        }
        if (t.ti_min >= 36 && t.ti_min < 48) {
            anf = anf + (4 * .1047198);
        }
        if (t.ti_min >= 48 && t.ti_min < 60) {
            anf = anf + (5 * .1047198);
        }
        if (t.ti_min + 12 >= 12 && t.ti_min + 12 < 24) {
            anf1 = anf1 + 2 * .1047198;
        }
        if (t.ti_min + 12 >= 24 && t.ti_min + 12 < 36) {
            16 | P a g eanf1 = anf1 + (3 * .1047198);
        }
        if (t.ti_min + 12 >= 36 && t.ti_min + 12 < 48) {
            anf1 = anf1 + (4 * .1047198);
        }
        if (t.ti_min + 12 >= 48 && t.ti_min + 12 < 60) {
            anf1 = anf1 + (5 * .1047198);
        }
        gotoxy(2, 2);
        printf("The system time is: %d: %d: %d",
            t.ti_hour, t.ti_min, t.ti_sec);
        ph = 0;
        pm = t.ti_min + m;
        if (pm / 60 >= 1)
            ph = 1;
        gotoxy(2, 4);
        printf("%s is : %d: %d: %d",
            city, (t.ti_hour + h + ph) % 24, (t.ti_min + m) % 60, t.ti_sec);
        setcolor(2);
        outtextxy(80, 350, "System time");
        outtextxy(470, 350, city);
        setlinestyle(0, 0, 0);
        setcolor(0);
        line(120, 240, x, y);
        line(520, 240, x1, y1);
        line(120, 240, q, w);
        line(520, 240, q1, w1);
        17 | P a g eline(120, 240, ta, d);
        line(520, 240, ta1, d1);
        x = 120 + 65 * cos(angle);
        x1 = 520 + 65 * cos(angle1);
        y = 240 + 65 * sin(angle);
        y1 = 240 + 65 * sin(angle1);
        q = 120 + 55 * cos(an);
        q1 = 520 + 55 * cos(an1);
        w = 240 + 55 * sin(an);
        w1 = 240 + 55 * sin(an1);
        ta = 120 + 45 * cos(anf);
        ta1 = 520 + 45 * cos(anf1);
        d = 240 + 45 * sin(anf);
        d1 = 240 + 45 * sin(anf1);
        setcolor(10);
        setlinestyle(0, 0, 2);
        line(120, 240, x, y);
        line(520, 240, x1, y1);
        setlinestyle(0, 0, 2);
        setcolor(9);
        line(120, 240, q, w);
        line(520, 240, q1, w1);
        setlinestyle(0, 0, 3);
        setcolor(4);
        line(120, 240, ta, d);
        line(520, 240, ta1, d1);
        angle += .1047198;
        delay(1000);
        count++;
        setcolor(count);
        outtextxy(460, 440, "MADE BY :- batch no 12");
        outtextxy(460, 460, "cse IIrd YEAR");
    }
}

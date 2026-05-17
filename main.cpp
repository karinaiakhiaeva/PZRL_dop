#include "min_circle.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "Тест 1: Один отрезок" << std::endl;
    LineSegment seg1 = {{0, 0}, {4, 0}};
    std::vector<LineSegment> segments1 = {seg1};
    
    Circle result1 = MinimumEnclosingCircleForSegments(segments1);
    std::cout << "Центр: (" << result1.center.x << ", " << result1.center.y << ")" << std::endl;
    std::cout << "Радиус: " << result1.radius << std::endl;
    std::cout << std::endl;
    
    
    std::cout << "Тест 2: Два пересекающихся отрезка" << std::endl;
    LineSegment seg2_1 = {{-2, 0}, {2, 0}};
    LineSegment seg2_2 = {{0, -2}, {0, 2}};
    std::vector<LineSegment> segments2 = {seg2_1, seg2_2};
    
    Circle result2 = MinimumEnclosingCircleForSegments(segments2);
    std::cout << "Центр: (" << result2.center.x << ", " << result2.center.y << ")" << std::endl;
    std::cout << "Радиус: " << result2.radius << std::endl;
    std::cout << std::endl;
        
    std::cout << "Тест 3: Два параллельных отрезка" << std::endl;
    LineSegment seg3_1 = {{0, 0}, {2, 0}};
    LineSegment seg3_2 = {{0, 3}, {2, 3}};
    std::vector<LineSegment> segments3 = {seg3_1, seg3_2};
    
    Circle result3 = MinimumEnclosingCircleForSegments(segments3);
    std::cout << "Центр: (" << result3.center.x << ", " << result3.center.y << ")" << std::endl;
    std::cout << "Радиус: " << result3.radius << std::endl;
    std::cout << std::endl;
        
    std::cout << "Тест 4: Три отрезка" << std::endl;
    LineSegment seg4_1 = {{0, 0}, {4, 0}};
    LineSegment seg4_2 = {{4, 0}, {2, 3}};
    LineSegment seg4_3 = {{2, 3}, {0, 0}};
    std::vector<LineSegment> segments4 = {seg4_1, seg4_2, seg4_3};
    
    Circle result4 = MinimumEnclosingCircleForSegments(segments4);
    std::cout << "Центр: (" << result4.center.x << ", " << result4.center.y << ")" << std::endl;
    std::cout << "Радиус: " << result4.radius << std::endl;
    std::cout << std::endl;
    

    std::cout << "Тест 5: Пустой вектор" << std::endl;
    std::vector<LineSegment> segments5;
    
    Circle result5 = MinimumEnclosingCircleForSegments(segments5);
    std::cout << "isValid: " << (result5.isValid() ? "true" : "false") << std::endl;
    std::cout << "Радиус: " << result5.radius << std::endl;
    std::cout << std::endl;
        
    std::cout << "Тест 6: Случайный набор отрезков" << std::endl;
    LineSegment seg6_1 = {{1, 1}, {5, 1}};
    LineSegment seg6_2 = {{3, 0}, {3, 4}};
    LineSegment seg6_3 = {{1, 3}, {5, 3}};
    std::vector<LineSegment> segments6 = {seg6_1, seg6_2, seg6_3};
    
    Circle result6 = MinimumEnclosingCircleForSegments(segments6);
    std::cout << "Центр: (" << result6.center.x << ", " << result6.center.y << ")" << std::endl;
    std::cout << "Радиус: " << result6.radius << std::endl;
    
    std::cout << "Проверка вхождения" << std::endl;
    for (const auto& seg : segments6) {
        bool yes = result6.containsEntireSegment(seg);
        std::cout << "Отрезок [(" << seg.start.x << "," << seg.start.y << ") - ("
                  << seg.end.x << "," << seg.end.y << ")] внутри: " 
                  << (yes ? "ДА" : "НЕТ") << std::endl;
    }
    
    return 0;
}

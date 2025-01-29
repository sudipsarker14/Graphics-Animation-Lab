#include <GL/glut.h>
#include <cmath>

// Define a structure for the Quad with its corner coordinates
struct Quad {
    float x1, y1; // Top-left corner
    float x2, y2; // Top-right corner
    float x3, y3; // Bottom-right corner
    float x4, y4; // Bottom-left corner
};

Quad quad = { -0.5f, 0.5f, 0.5f, 0.5f, 0.5f, -0.5f, -0.5f, -0.5f };
float rotationAngle = 0.0f;

// This function rotates the Quad around a given pivot point by the specified angle
void RotateQuad(Quad &quad, float angle, float pivotX, float pivotY) {
    // Convert the angle from degrees to radians for trigonometric calculations
    float radians = angle * M_PI / 180.0f;

    // Function to rotate a single point around the pivot
    auto RotatePoint = [&](float &x, float &y) {
        float translatedX = x - pivotX;
        float translatedY = y - pivotY;

        float rotatedX = translatedX * cos(radians) - translatedY * sin(radians);
        float rotatedY = translatedX * sin(radians) + translatedY * cos(radians);

        x = rotatedX + pivotX;
        y = rotatedY + pivotY;
    };

    // Rotate all four corners of the Quad using the above function
    RotatePoint(quad.x1, quad.y1);
    RotatePoint(quad.x2, quad.y2);
    RotatePoint(quad.x3, quad.y3);
    RotatePoint(quad.x4, quad.y4);
}

// This function draws the Quad on the screen
void DrawQuad(const Quad &quad) {
    glBegin(GL_QUADS);
    glVertex2f(quad.x1, quad.y1);
    glVertex2f(quad.x2, quad.y2);
    glVertex2f(quad.x3, quad.y3);
    glVertex2f(quad.x4, quad.y4);
    glEnd();
}

// This function is responsible for rendering the Quad
void Display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen with the background color

    glColor3ub(3, 150, 72); // Set the Quad color to Green
    DrawQuad(quad); // Draw the Quad on the screen

    glFlush(); // Flush the graphics pipeline to ensure everything is drawn
}

// This function handles keyboard input to rotate the Quad
void Keyboard(unsigned char key, int x, int y) {
    if (key == 'r' || key == 'R') { // Rotate clockwise when 'r' is pressed
        rotationAngle += 5.0f;
        if (rotationAngle >= 360.0f) rotationAngle -= 360.0f;
    } else if (key == 'l' || key == 'L') { // Rotate counter-clockwise when 'l' is pressed
        rotationAngle -= 5.0f;
        if (rotationAngle <= -360.0f) rotationAngle += 360.0f;
    }

    // Update the Quad rotation and refresh the display
    RotateQuad(quad, rotationAngle, 0.0f, 0.0f);
    glutPostRedisplay();
}

// Main function initializes the OpenGL environment and starts the rendering loop
int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Rotate Quad with Keyboard");

    glClearColor(1.0f, 0.0f, 0.0f, 1.0f); // Set the background color to red
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set up a 2D orthographic viewing region

    glutDisplayFunc(Display); // Set the display callback function
    glutKeyboardFunc(Keyboard); // Set the keyboard callback function
    glutMainLoop(); // Enter the main loop to process events and render continuously

    return 0;
}

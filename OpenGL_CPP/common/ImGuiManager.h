#ifndef IM_GUI_MANAGER_H   
#define IM_GUI_MANAGER_H 

#include "../dependencies/imgui/imgui.h"
#include "../dependencies/imgui/imgui_impl_glfw.h"
#include "../dependencies/imgui/imgui_impl_opengl3.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"

/// <summary>
/// Manages ImGui rendering and UI controls for the application.
/// </summary>
class ImGuiManager
{
private:
    OpenGLInit* p_init{}; 
public:
    ImGuiManager(OpenGLInit* p_init) : p_init(p_init) {} 
    /// <summary>
    /// Constructor for the ImGuiManager class.
    /// Initializes the ImGuiManager instance.
    /// </summary>
    ImGuiManager();

    /// <summary>
    /// Initializes the ImGui context and sets up the necessary OpenGL and GLFW bindings.
    /// </summary>
    /// <param name="window">The GLFW window that will be used for rendering the ImGui UI.</param>
    void Init(GLFWwindow* p_window);

    /// <summary>
    /// Renders the ImGui UI elements for controlling the application.
    /// Allows for user input and manipulation of objects like squares and triangles.
    /// </summary>
    /// <param name="camera">The Camera object used for interacting with the scene.</param>
    /// <param name="window">The GLFW window that is being used for rendering the UI.</param>
    /// <param name="translateSquareOne">Translation vector for the first square object.</param>
    /// <param name="translateSquareTwo">Translation vector for the second square object.</param>
    /// <param name="translateTriangle">Translation vector for the triangle object.</param>
    void RenderUI(Camera& camera, GLFWwindow* p_window, glm::vec3& translateSquareOne, glm::vec3& translateSquareTwo, glm::vec3& translateTriangle);

    /// <summary>
    /// Destructor for the ImGuiManager class.
    /// Cleans up and shuts down the ImGui context.
    /// </summary>
    ~ImGuiManager();
};

#endif // !ImGuiManager_H

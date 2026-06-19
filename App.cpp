#include <VeneriX.h>
#include <EntryPoint.h>

class MyScene : public Scene {
public:
    MyScene() : Scene("My Scene") {
        // Create entities, components, and load assets here
    }

    void Update(const VeneriX::TimeStep& ts) override {
        // Game logic that isn't owned by a component goes here
    }

    void Render() override {
        // Draw your world here
    }

    void RenderUI() override {
        // Draw ImGui windows / HUD here
    }
};

class MyApp : public VeneriX::Application {
public:
    MyApp(const VeneriX::ApplicationSpecification& spec) : VeneriX::Application(spec) {
        SetScene(new MyScene());
    }
};

VeneriX::Application* VeneriX::CreateApplication() {
    VeneriX::ApplicationSpecification spec;
    spec.Name = "My VeneriX Game";
    spec.Width = 1280;
    spec.Height = 720;

    return new MyApp(spec);
}

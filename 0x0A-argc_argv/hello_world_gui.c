#include <gtk/gtk.h>

// Callback function for the "clicked" signal of the button
void on_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Hello, World!\n");
}

int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);
    
    // Create a main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    
    // Create a button and add it to the window
    GtkWidget *button = gtk_button_new_with_label("Say Hello");
    gtk_container_add(GTK_CONTAINER(window), button);
    
    // Connect the "clicked" signal of the button to the callback function
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
    
    // Show the window and start the main loop
    gtk_widget_show_all(window);
    gtk_main();
    
    return 0;
}

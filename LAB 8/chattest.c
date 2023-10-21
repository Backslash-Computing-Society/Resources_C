#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>

static void on_age_entry_activate (GtkWidget *widget, gpointer data) {
    const gchar *age_str = gtk_entry_get_text(GTK_ENTRY(widget));
    int age = atoi(age_str);

    if (age < 18) {
        GtkWidget *dialog = gtk_message_dialog_new (GTK_WINDOW(data),
                                                    GTK_DIALOG_DESTROY_WITH_PARENT,
                                                    GTK_MESSAGE_ERROR,
                                                    GTK_BUTTONS_CLOSE,
                                                    "You are not of voting age.");
        gtk_dialog_run (GTK_DIALOG (dialog));
        gtk_widget_destroy (dialog);
    } else {
        GtkWidget *dialog = gtk_message_dialog_new (GTK_WINDOW(data),
                                                    GTK_DIALOG_DESTROY_WITH_PARENT,
                                                    GTK_MESSAGE_INFO,
                                                    GTK_BUTTONS_CLOSE,
                                                    "You are of voting age.");
        gtk_dialog_run (GTK_DIALOG (dialog));
        gtk_widget_destroy (dialog);
    }
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Voting Age Checker");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 250, 100);

    GtkWidget *age_label = gtk_label_new("Enter your age:");
    GtkWidget *age_entry = gtk_entry_new();

    g_signal_connect(G_OBJECT(age_entry), "activate", G_CALLBACK(on_age_entry_activate), window);

    GtkWidget *grid = gtk_grid_new();
    gtk_grid_attach(GTK_GRID(grid), age_label, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), age_entry, 1, 0, 1, 1);

    gtk_container_add(GTK_CONTAINER(window), grid);

    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}
#ifndef DASHBOARD_INFORMASI_H_INCLUDED
#define DASHBOARD_INFORMASI_H_INCLUDED

#include "dashboard.h"

void display_dashboard_informasi();
void handle_display_dashboard_informasi(GtkWidget *widget, GtkWidget *window);

// DASHBOARD INFORMASI HEADER
#include "dashboard_informasi_antrian.h"
#include "dashboard_informasi_transaksi.h"
#include "dashboard_informasi_pembeli.h"
#include "dashboard_informasi_aplikasi.h"

#endif // DASHBOARD_INFORMASI_H_INCLUDED

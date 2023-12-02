#include <iostream>
#include <iomanip> // Header untuk manipulator lebar lapangan
#include <random>
#include <string>
using namespace std;

class GlobalData {
    public:
    string isJawabanRawatInapUnitPelayanan;

    void setDataJawabanRawatInapUnitPelayanan(string hasilJawabanRIUnitPelayanan){
        isJawabanRawatInapUnitPelayanan = hasilJawabanRIUnitPelayanan;
    };
};

class Pasien {
    public:
    int nomor_pasien;
    string nama_pasien, alamat;
    int no_tlp;

    void setDataPasien(string hasilNamaPasien, string hasilAlamat, int hasilNomorPasien, int hasilNoTelp){
        nama_pasien = hasilNamaPasien;
        alamat = hasilAlamat;
        nomor_pasien = hasilNomorPasien;
        no_tlp = hasilNoTelp;
    }
};

class Pulang {
    public:
    int PasienPulang(){
        cout << "Pulang \n";
    }
};

class Farmasi {
    public:
    Pulang pulang;
    Pasien pasien;
    string nama_obat;
    float jumlah_obat, harga_obat, total_harga;

    void setDataFarmasi(string hasilNamaObat, float hasilJumlahObat, float hasilHargaObat, float hasilTotalHarga){
        nama_obat = hasilNamaObat;
        jumlah_obat = hasilJumlahObat;
        harga_obat = hasilHargaObat;
        total_harga = hasilTotalHarga;
        nama_obat = hasilNamaObat;
    }

    void cetakKwitansi_AfterPendaftaranBPJS(){
        cout << "================== KWITANSI OBAT ================================================================================================ \n";
        cout << setw(13) << left << "Nomor Kartu BPJS" << setw(20) << right << "Nama Pasien" << setw(20) << right << "Alamat Pasien" << "\n";
        cout << setw(20) << left << pasien.nomor_pasien << setw(20) << right << pasien.nama_pasien << setw(20) << right << pasien.alamat << "\n";
        cout << "============================================================================================================\n";
        cout << setw(20) << left << "Nama Obat" << setw(20) << right << "Jumlah Obat" << setw(20) << right << "Kandungan" << setw(20) << right << "Harga Obat" << "\n";
        cout << setw(20) << left << "Dexamethasone" << setw(20) << right << "1" << setw(20) << right << "15ml" << setw(20) << right << "15.000" <<  "\n";
        cout << setw(20) << left << "Antiseptik Betadine 15 Ml" << setw(16) << right << "1" << setw(17) << right << "15ml" << setw(18) << right << "25.000" << "\n";
        cout << setw(20) << left << "Amoxicillin 500 mg" << setw(20) << right << "10 Tablet" << setw(20) << right << "0.5 mg/butir" << setw(20) << right << "20.000" << "\n";
        cout << "============================================================================================================ \n";
        cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << "Rp. 60.000" << "\n";
        cout << "====================================================== \n";
        cout << "Petugas memberikan stempel resmi... \n";
        cout << "Petugas menyerahkan obat kepada pasien... \n";
        cout << "Pasien mendapatkan obat... \n";
        pulang.PasienPulang();
    }


    void main(){
        cout << "========================================================= \n";
        cout << "Farmasi... \n";
        cout << "Cetak Kwitansi Obat... \n";
        cout << "========================================================= \n";
        cout << "Menyerahkan Kwitansi Obat ke petugas apotik... \n";
        cout << "Petugas Apotik konfirmasi ke BPJS... \n";
        cout << "Petugas Menghitung harga dan ketentuan cara pakai obat... \n";
        // perhitungan obat dan di masukan ke kwitansi
        cout << "\n";
        total_harga = harga_obat * jumlah_obat;
        cout << "================== KWITANSI OBAT ================== \n";
        cout << setw(13) << left << "Nomor Kartu BPJS" << setw(20) << right << "Nama Pasien" << setw(20) << right << "Alamat Pasien" << "\n";
        cout << setw(20) << left << pasien.nomor_pasien << setw(20) << right << pasien.nama_pasien << setw(20) << right << pasien.alamat << "\n";
        cout << "======================================================\n";
        cout << setw(20) << left << "Nama Obat" << setw(20) << right << "Jumlah Obat" << setw(20) << right << "Harga Obat" << "\n";
        cout << setw(20) << left << nama_obat << setw(20) << right << jumlah_obat << setw(20) << right << harga_obat << "\n";
        cout << "====================================================== \n";
        cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << total_harga << "\n";
        cout << "====================================================== \n";
        cout << "Petugas memberikan stempel resmi... \n";
        cout << "Petugas menyerahkan obat kepada pasien... \n";
        cout << "Pasien mendapatkan obat... \n";
        pulang.PasienPulang();
    }
};

class IGD {
    public:
    bool status_igd;
    string jawaban_status_igd;
    string jawaban_dokter_bpjs;

    class Penunjang {
        public:
        string jawaban_rujukan;
        int no_kartu_bpjs_asli;
        string fotocopy_bpjs;
        string fotocopy_ktp;

        int PerluRujukan(){
            cout << "Masukan Nomor Kartu BPJS Asli: ";
            cin >> no_kartu_bpjs_asli;
            cout << "Masukan 1 Lembar Foto Copy BPJS: ";
            cin >> fotocopy_bpjs;
            cout << "Masukan KTP Asli: ";
            cin >> fotocopy_ktp;

            cout << "Nomor Kartu BPJS Asli: "<< no_kartu_bpjs_asli << "\n";
            cout << "1 Lembar Foto Copy BPJS: "<< fotocopy_bpjs << "\n";
            cout << "KTP Asli: " << fotocopy_ktp << "\n";
        }
    };
};

class RawatInap {
    public:
        GlobalData global;
        IGD::Penunjang penunjang;
        Pulang pulang;
        Farmasi farmasi;
        Pasien pasien;

        string jawaban_tindakan;
        string jawbaan_sembuh;

        int main(){
            cout << "Rawat Inap Max 3 Hari... \n";
            cout << "Masuk Ke Ruang Perawatan dan Diobservasi... \n";
            cout << "Perlu tindakan? (yes/no): ", cin >> jawaban_tindakan;

            if(jawaban_tindakan == "yes"){
                // logic perlu rujukan
                penunjang.PerluRujukan();
                cout << "Surat Rujukan... \n";
                cout << "Petugas admin Rujukan konfirmasi ke BPJS... \n";
                cout << "Petugas memberikan cap resmi... \n";
                cout << "Pasien dirujuk ke rumah sakit... \n";
                pulang.PasienPulang();
            }else{
                // apakah pasien sembuh?
                cout << "Apakah pasien sembuh? (yes/no):", cin >> jawbaan_sembuh;
                if(jawbaan_sembuh == "yes"){
                    // logic farmasi
                   farmasi.pasien = pasien;
                        farmasi.cetakKwitansi_AfterPendaftaranBPJS();
                //    if(unit_pelayanan.global.isJawabanRawatInapUnitPelayanan == "yes"){
                //         // tampilkan obat untuk IGD dari unit pelayanan -> Farmasi
                //         farmasi.main();
                //         pulang.PasienPulang();
                //    }else{
                //         pulang.PasienPulang();
                //    }
                }else{
                    cout << "Meninggal \n";
                    pulang.PasienPulang();
                }
            }
        }
};


class UnitPelayanan {
    public:
    GlobalData global;
    Pasien pasien;
    RawatInap rawat_inap;
    Farmasi farmasi;
    string jawaban_keluhan_gizi;
    string jawaban_dokter_dirawat;

        int main(){
            cout << "Unit Pelayanan... \n";
            cout << "Diagnosa Oleh Dokter... \n";
            cout << "Apakah keluhan tentang gizi? (yes/no): ", cin >> jawaban_keluhan_gizi;

            if(jawaban_keluhan_gizi == "yes"){
                string is_jawaban_penyakit_berat;
                // Dokter Gizi
                cout << "Dokter Gizi... \n";
                cout << "Pemeriksaan... \n";
                cout << "Apakah penyakit berat? (yes/no): ", cin >> is_jawaban_penyakit_berat;
                if(is_jawaban_penyakit_berat == "yes"){
                    // penyakit berat ?
                    cout << "Obat obat penyakit berat... \n";
                    cout << "Dokter Gizi Menginput Data... \n";
                    cout << "Nama obat: ", cin >> farmasi.nama_obat;
                    cout << "Jumlah obat: ", cin >> farmasi.jumlah_obat;
                    cout << "Harga obat: ", cin >> farmasi.harga_obat;
                    farmasi.total_harga = farmasi.harga_obat * farmasi.jumlah_obat;
                    cout << "\n";
                    cout << "========= RESEP DOKTER GIZI OBAT PENYAKIT BERAT ================== \n";
                    cout << setw(20) << left << "Deskripsi" << setw(20) << right << "Total Harga" << "\n";
                    cout << setw(20) << left << "Nama Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.nama_obat << "\n";
                    cout << setw(20) << left << "Jumlah Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.jumlah_obat << "\n";
                    cout << setw(20) << left << "Harga Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.harga_obat << "\n";
                    cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << farmasi.total_harga << "\n";
                    cout << "================================================================== \n";

                    cout << "Apakah pasien perlu dirawat? (yes/no): ", cin >> jawaban_dokter_dirawat;
                    if(jawaban_dokter_dirawat == "yes"){
                        // Rawat Inap
                        farmasi.pasien = pasien;
                        rawat_inap.pasien = pasien;
                        rawat_inap.main();
                        global.isJawabanRawatInapUnitPelayanan = "yes";
                        global.setDataJawabanRawatInapUnitPelayanan("yes");
                    }else if(jawaban_dokter_dirawat == "no"){
                        // Farmasi
                        rawat_inap.pasien = pasien;
                        farmasi.pasien = pasien;
                        farmasi.main();
                    }else{
                        cout << "Pilihan anda tidak tersedia...";
                    }
                }else if(is_jawaban_penyakit_berat == "no"){
                    // penyakit ringan
                    cout << "Penyakit Ringan";
                    cout << "Obat obat penyakit ringan... \n";
                    cout << "Dokter Gizi Menginput Data... \n";
                    cout << "Nama obat: ", cin >> farmasi.nama_obat;
                    cout << "Jumlah obat: ", cin >> farmasi.jumlah_obat;
                    cout << "Harga obat: ", cin >> farmasi.harga_obat;
                    farmasi.total_harga = farmasi.harga_obat * farmasi.jumlah_obat;
                    cout << "\n";
                    cout << "========= RESEP DOKTER GIZI OBAT PENYAKIT RINGAN ================== \n";
                    cout << setw(20) << left << "Deskripsi" << setw(20) << right << "Total Harga" << "\n";
                    cout << setw(20) << left << "Nama Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.nama_obat << "\n";
                    cout << setw(20) << left << "Jumlah Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.jumlah_obat << "\n";
                    cout << setw(20) << left << "Harga Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.harga_obat << "\n";
                    cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << farmasi.total_harga << "\n";
                    cout << "================================================================== \n";


                    cout << "Apakah pasien perlu dirawat? (yes/no): ", cin >> jawaban_dokter_dirawat;
                    if(jawaban_dokter_dirawat == "yes"){
                        // Rawat Inap
                        farmasi.pasien = pasien;
                        rawat_inap.pasien = pasien;
                        rawat_inap.main();
                        global.setDataJawabanRawatInapUnitPelayanan("yes");
                    }else if(jawaban_dokter_dirawat == "no"){
                        // Farmasi
                        rawat_inap.pasien = pasien;
                        farmasi.pasien = pasien;
                        farmasi.main();
                    }else{
                        cout << "Pilihan anda tidak tersedia...";
                    }
                }else{
                    cout << "Pilihan anda tidak tersedia...";
                }
            }else {
                // Dokter Umum
                string is_jawaban_penyakit_berat;
                cout << "Dokter umum... \n";
                cout << "Pemeriksaan... \n";
                cout << "Apakah penyakit berat? (yes/no): ", cin >> is_jawaban_penyakit_berat;
                  if(is_jawaban_penyakit_berat == "yes"){
                    // penyakit berat
                    cout << "Obat obat penyakit berat... \n";
                    cout << "Dokter Umum Menginput Data... \n";
                    cout << "Nama obat: ", cin >> farmasi.nama_obat;
                    cout << "Jumlah obat: ", cin >> farmasi.jumlah_obat;
                    cout << "Harga obat: ", cin >> farmasi.harga_obat;
                    farmasi.total_harga = farmasi.harga_obat * farmasi.jumlah_obat;
                    cout << "\n";
                    cout << "========= RESEP DOKTER UMUM OBAT PENYAKIT BERAT ================== \n";
                    cout << setw(20) << left << "Deskripsi" << setw(20) << right << "Total Harga" << "\n";
                    cout << setw(20) << left << "Nama Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.nama_obat << "\n";
                    cout << setw(20) << left << "Jumlah Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.jumlah_obat << "\n";
                    cout << setw(20) << left << "Harga Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.harga_obat << "\n";
                    cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << farmasi.total_harga << "\n";
                    cout << "================================================================== \n";


                    cout << "Apakah pasien perlu dirawat? (yes/no): ", cin >> jawaban_dokter_dirawat;
                    if(jawaban_dokter_dirawat == "yes"){
                        // Rawat Inap
                        farmasi.pasien = pasien;
                        rawat_inap.pasien = pasien;
                        rawat_inap.main();
                        global.setDataJawabanRawatInapUnitPelayanan("yes");
                    }else if(jawaban_dokter_dirawat == "no"){
                        // Farmasi
                        rawat_inap.pasien = pasien;
                        farmasi.pasien = pasien;
                        farmasi.main();
                    }else{
                        cout << "Pilihan anda tidak tersedia...";
                    }
                }else if(is_jawaban_penyakit_berat == "no"){
                    // penyakit ringan
                    cout << "Penyakit Ringan";
                    cout << "Obat obat penyakit ringan... \n";
                    cout << "Dokter Umum Menginput Data... \n";
                    cout << "Nama obat: ", cin >> farmasi.nama_obat;
                    cout << "Jumlah obat: ", cin >> farmasi.jumlah_obat;
                    cout << "Harga obat: ", cin >> farmasi.harga_obat;
                    farmasi.total_harga = farmasi.harga_obat * farmasi.jumlah_obat;
                    cout << "\n";
                    cout << "========= RESEP DOKTER UMUM OBAT PENYAKIT RINGAN ================== \n";
                    cout << setw(20) << left << "Deskripsi" << setw(20) << right << "Total Harga" << "\n";
                    cout << setw(20) << left << "Nama Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.nama_obat << "\n";
                    cout << setw(20) << left << "Jumlah Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.jumlah_obat << "\n";
                    cout << setw(20) << left << "Harga Obat" << fixed << setprecision(2) << setw(20) << right << farmasi.harga_obat << "\n";
                    cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << farmasi.total_harga << "\n";
                    cout << "================================================================== \n";


                    cout << "Apakah pasien perlu dirawat? (yes/no): ", cin >> jawaban_dokter_dirawat;
                    if(jawaban_dokter_dirawat == "yes"){
                        // Rawat Inap
                        farmasi.pasien = pasien;
                        rawat_inap.pasien = pasien;
                        rawat_inap.main();
                        global.setDataJawabanRawatInapUnitPelayanan("yes");
                    }else if(jawaban_dokter_dirawat == "no"){
                        // Farmasi
                        rawat_inap.pasien = pasien;
                        farmasi.pasien = pasien;
                        farmasi.main();
                    }else{
                        cout << "Pilihan anda tidak tersedia...";
                    }
                }else{
                    cout << "Pilihan anda tidak tersedia...";
            }
        }
    };
};

class BPJS {
    public:
        Pasien pasien;
        Pulang pulang;
        Farmasi farmasi;
        UnitPelayanan unit_pelayanan;

        string jawaban_pasien_bpjs;
        string nama_lengkap;
        int no_ktp;
        string alamat;
        int no_telphone;

    int main(){
        cout << "Pendaftaran BPJS... \n";
        cout << "Pendaftaran Lama atau Baru? (baru/lama):", cin >> jawaban_pasien_bpjs;
        // PASIEN WAJIB MEMPUNYAI BPJS
        if(jawaban_pasien_bpjs == "baru"){
            pulang.PasienPulang();
        }else if(jawaban_pasien_bpjs == "lama"){
            string jawaban_perlu_penanganan;
            // PASIEN BPJS
            cout << "Masukan Nama Lengkap Pasien... : ", cout << pasien.nama_pasien << "\n";
            cout << "Masukan Nomor KTP Pasien... : ", cin >> no_ktp;
            cout << "Masukan alamat Pasien... : ", cout << pasien.alamat << "\n";
            cout << "Masukan Nomor Telephone Pasien... : ", cout << pasien.no_tlp << "\n";
            cout << "========================================================= \n";
            cout << "Hasil Nama Pasien : " << pasien.nama_pasien << "\n";
            cout << "Hasil Nomor KTP Pasien : " << no_ktp << "\n";
            cout << "Hasil Alamat Pasien : " << pasien.alamat << "\n";
            cout << "Hasil Nomor Telephone : " << pasien.no_tlp << "\n";
            cout << "========================================================= \n";
            cout << "Menerima nomor antrian... \n";
            cout << "Kasih nomor BPJS ke petugas... \n";
            cout << "Ditanya Bagaimana Keluhan Pasiennya... \n";
            cout << "Perlu Penanganan? (yes/no): ", cin >> jawaban_perlu_penanganan;

            if(jawaban_perlu_penanganan == "yes"){
                // masuk ke unit pelayanan
               unit_pelayanan.pasien = pasien;
               unit_pelayanan.main();
            }else if(jawaban_perlu_penanganan == "no"){
                // Farmasi
                farmasi.pasien = pasien;
                    cout << "============================== KWITANSI OBAT =================================================== \n";
                    cout << setw(13) << left << "Nomor Kartu BPJS" << setw(20) << right << "Nama Pasien" << setw(20) << right << "Alamat Pasien" << "\n";
                    cout << setw(20) << left << pasien.nomor_pasien << setw(20) << right << pasien.nama_pasien << setw(20) << right << pasien.alamat << "\n";
                    cout << "============================================================================================================\n";
                    cout << setw(20) << left << "Nama Obat" << setw(20) << right << "Jumlah Obat" << setw(20) << right << "Kandungan" << setw(20) << right << "Harga Obat" << "\n";
                    cout << setw(20) << left << "Paracetamol 500 mg" << setw(20) << right << "10" << setw(20) << right << "500mg" << setw(20) << right << "50000" <<  "\n";
                    cout << "============================================================================================================ \n";
                    cout << setw(20) << left << "Total Harga" << fixed << setprecision(2) << setw(20) << right << "Rp. 50.000" << "\n";
                    cout << "====================================================== \n";
                    cout << "Petugas memberikan stempel resmi... \n";
                    cout << "Petugas menyerahkan obat kepada pasien... \n";
                    cout << "Pasien mendapatkan obat... \n";
                    pulang.PasienPulang();
            }else{
                cout << "Pilihan anda tidak sesuai";
            }
        }else{
             cout << "Pilihan anda tidak sesuai";
        }
    }
};


int main(){
    Pasien dataPasien;
    IGD gawat_darurat;
    IGD::Penunjang penunjang;
    Pulang pulang;
    RawatInap rawat_inap;
    BPJS bpjs;
    Farmasi farmasi;

    cout << "Pasien Datang" << endl;
    // random angka dari 1-100 untuk pasien mendapatkan nomor pasien
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::mt19937 rng(std::rand());
    std::uniform_int_distribution<int> distribution(1, 100);
    int randomNumber = distribution(rng);
    dataPasien.nomor_pasien = randomNumber;
    cout << "Nomor Pasien : " << dataPasien.nomor_pasien << "\n";
    cout << "Masukan Nama Pasien : ", cin >> dataPasien.nama_pasien;
    cout << "Masukan Alamat Pasien : ", cin >> dataPasien.alamat;
    cout << "Masukan Nomor Telephone : ", cin >> dataPasien.no_tlp;
    cout << "========================================================= \n";
    cout << "Hasil Nomor Pasien : " << dataPasien.nomor_pasien << "\n";
    cout << "Hasil Nama Pasien : " << dataPasien.nama_pasien << "\n";
    cout << "Hasil Alamat Pasien : " << dataPasien.alamat << "\n";
    cout << "Hasil Nomor Telephone : " << dataPasien.no_tlp << "\n";
    cout << "========================================================= \n";

    cout << "Apakah Pasien Gawat Darurat? (yes/no): ";
    cin >> gawat_darurat.jawaban_status_igd;

    if(gawat_darurat.jawaban_status_igd == "yes"){
        cout << "========================================================= \n";
        cout << "Masuk igd... \n";
        cout << "Pemeriksaan dokter dengan BPJS: (yes/no) ";
        cin >> gawat_darurat.jawaban_dokter_bpjs;
        if(gawat_darurat.jawaban_dokter_bpjs == "yes"){
            cout << "Penunjang... \n";
            cout << "Perlu Rujukan? (yes/no): ";
            cin >> penunjang.jawaban_rujukan;
            if(penunjang.jawaban_rujukan == "yes"){
                // logic rujukan
                cout << "========================================================= \n";
                penunjang.PerluRujukan();
                cout << "Surat Rujukan... \n";
                cout << "Petugas admin Rujukan konfirmasi ke BPJS... \n";
                cout << "Petugas memberikan cap resmi... \n";
                cout << "Pasien dirujuk ke rumah sakit... \n";
                pulang.PasienPulang();
            }else if(penunjang.jawaban_rujukan == "no"){
                // rawat inap
             cout << "========================================================= \n";
             cout << "RAWAT INAP \n";
             rawat_inap.pasien.setDataPasien(dataPasien.nama_pasien, dataPasien.alamat, dataPasien.nomor_pasien, dataPasien.no_tlp);
             rawat_inap.main();
          }else{
            cout << "Pilihan anda tidak tersedia...";
          }
        }else if(gawat_darurat.jawaban_dokter_bpjs == "no"){
             // mnghubungi keluarga
             cout << "Menghubungi Keluarga... \n";
             pulang.PasienPulang();
        }else{
          cout << "Pilihan anda tidak sesuai";
        }
    }else if(gawat_darurat.jawaban_status_igd == "no"){
        // logic bpjs
        bpjs.pasien.setDataPasien(dataPasien.nama_pasien, dataPasien.alamat, dataPasien.nomor_pasien, dataPasien.no_tlp);
        bpjs.main();
    }else{
        cout << "Pilihan anda tidak sesuai";
    }
}
